
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct vmx {int dummy; } ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void
FUNC_2(struct vmx *VAR_2, int VAR_3)
{
 uint32_t VAR_4;

 VAR_4 = FUNC_1(VAR_0);
 FUNC_0(VAR_4 & VAR_1,
     ("NMI blocking is not in effect %#x", VAR_4));
}
