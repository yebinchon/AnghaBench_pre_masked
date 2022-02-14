
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct adrep {scalar_t__ adrp_byteorder; int adrp_error; int adrp_seq; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void
FUNC_2(struct adrep *VAR_1)
{


 if (VAR_1->adrp_byteorder != VAR_0) {
  VAR_1->adrp_byteorder = VAR_0;
  VAR_1->adrp_seq = FUNC_1(VAR_1->adrp_seq);
  VAR_1->adrp_error = FUNC_0(VAR_1->adrp_error);
 }
}
