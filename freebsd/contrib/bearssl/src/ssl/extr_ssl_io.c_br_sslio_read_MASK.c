
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int engine; } ;
typedef TYPE_1__ br_sslio_context ;


 int VAR_0 ;
 int FUNC_0 (int ,size_t) ;
 unsigned char* FUNC_1 (int ,size_t*) ;
 int FUNC_2 (void*,unsigned char*,size_t) ;
 scalar_t__ FUNC_3 (TYPE_1__*,int ) ;

int
FUNC_4(br_sslio_context *VAR_1, void *VAR_2, size_t VAR_3)
{
 unsigned char *VAR_4;
 size_t VAR_5;

 if (VAR_3 == 0) {
  return 0;
 }
 if (FUNC_3(VAR_1, VAR_0) < 0) {
  return -1;
 }
 VAR_4 = FUNC_1(VAR_1->engine, &VAR_5);
 if (VAR_5 > VAR_3) {
  VAR_5 = VAR_3;
 }
 FUNC_2(VAR_2, VAR_4, VAR_5);
 FUNC_0(VAR_1->engine, VAR_5);
 return (int)VAR_5;
}
