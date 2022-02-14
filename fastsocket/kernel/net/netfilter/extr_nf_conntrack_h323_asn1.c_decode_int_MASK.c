
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


struct field_t {int sz; int attr; unsigned int lb; int offset; int name; } ;
struct TYPE_9__ {int cur; } ;
typedef TYPE_1__ bitstr_t ;



 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,int) ;

 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (TYPE_1__*,int) ;
 int FUNC_3 (char*,...) ;
 int VAR_2 ;


 int FUNC_4 (TYPE_1__*,int) ;
 unsigned int FUNC_5 (TYPE_1__*) ;
 unsigned int FUNC_6 (TYPE_1__*,unsigned int) ;

__attribute__((used)) static int FUNC_7(bitstr_t *VAR_3, const struct field_t *VAR_4,
                      char *VAR_5, int VAR_6)
{
 unsigned int VAR_7;

 FUNC_3("%*.s%s", VAR_6 * VAR_2, " ", VAR_4->name);

 switch (VAR_4->sz) {
 case 131:
  FUNC_0(VAR_3);
  VAR_3->cur++;
  break;
 case 128:
  FUNC_0(VAR_3);
  VAR_3->cur += 2;
  break;
 case 130:
  VAR_7 = FUNC_4(VAR_3, 2) + 1;
  FUNC_0(VAR_3);
  if (VAR_5 && (VAR_4->attr & VAR_0)) {
   unsigned int VAR_8 = FUNC_6(VAR_3, VAR_7) + VAR_4->lb;
   FUNC_3(" = %u", VAR_8);
   *((unsigned int *)(VAR_5 + VAR_4->offset)) = VAR_8;
  }
  VAR_3->cur += VAR_7;
  break;
 case 129:
  FUNC_0(VAR_3);
  FUNC_1(VAR_3, 2);
  VAR_7 = FUNC_5(VAR_3);
  VAR_3->cur += VAR_7;
  break;
 default:
  FUNC_2(VAR_3, VAR_4->sz);
  break;
 }

 FUNC_3("\n");

 FUNC_1(VAR_3, 0);
 return VAR_1;
}
