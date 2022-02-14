
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trail {scalar_t__ tr_magic; char const* tr_filename; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;

const char *
FUNC_1(const struct trail *VAR_1)
{

 FUNC_0(VAR_1->tr_magic == VAR_0);

 return (VAR_1->tr_filename);
}
