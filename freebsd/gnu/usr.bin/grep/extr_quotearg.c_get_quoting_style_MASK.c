
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct quoting_options {int style; } ;
typedef enum quoting_style { ____Placeholder_quoting_style } quoting_style ;


 struct quoting_options VAR_0 ;

enum quoting_style
FUNC_0 (struct quoting_options *VAR_1)
{
  return (VAR_1 ? VAR_1 : &VAR_0)->style;
}
