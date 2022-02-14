
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct direct {scalar_t__ d_reclen; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ,struct direct*) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__,scalar_t__,int,int ) ;
 int FUNC_3 (scalar_t__,struct direct*,long) ;
 scalar_t__ VAR_5 ;

__attribute__((used)) static void
FUNC_4(struct direct *VAR_6)
{
 VAR_6->d_reclen = FUNC_0(0, VAR_6);
 if (VAR_4 + VAR_6->d_reclen > VAR_0) {
  ((struct direct *)(VAR_2 + VAR_5))->d_reclen =
      VAR_0 - VAR_5;
  if (FUNC_2(VAR_2, VAR_0, 1, VAR_1) != 1)
   FUNC_1(VAR_3);
  VAR_4 = 0;
 }
 FUNC_3(VAR_2 + VAR_4, VAR_6, (long)VAR_6->d_reclen);
 VAR_5 = VAR_4;
 VAR_4 += VAR_6->d_reclen;
}
