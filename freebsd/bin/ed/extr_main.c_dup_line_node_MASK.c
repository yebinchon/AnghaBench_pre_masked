
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int len; int seek; } ;
typedef TYPE_1__ line_t ;


 char* VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,char*) ;
 scalar_t__ FUNC_1 (int) ;
 int VAR_2 ;
 char* FUNC_2 (int ) ;

line_t *
FUNC_3(line_t *VAR_3)
{
 line_t *VAR_4;

 if ((VAR_4 = (line_t *) FUNC_1(sizeof(line_t))) == ((void*)0)) {
  FUNC_0(VAR_2, "%s\n", FUNC_2(VAR_1));
  VAR_0 = "out of memory";
  return ((void*)0);
 }
 VAR_4->seek = VAR_3->seek;
 VAR_4->len = VAR_3->len;
 return VAR_4;
}
