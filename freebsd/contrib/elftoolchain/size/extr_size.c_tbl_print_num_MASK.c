
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uintmax_t ;
typedef scalar_t__ uint64_t ;
typedef enum radix_style { ____Placeholder_radix_style } radix_style ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int,char*,int ) ;
 int FUNC_1 (char*,int) ;

__attribute__((used)) static void
FUNC_2(uint64_t VAR_3, enum radix_style VAR_4, int VAR_5)
{
 char VAR_6[VAR_0];

 (void) FUNC_0(VAR_6, VAR_0, (VAR_4 == VAR_1 ? "%ju" :
     ((VAR_4 == VAR_2) ? "0%jo" : "0x%jx")), (uintmax_t) VAR_3);
 FUNC_1(VAR_6, VAR_5);
}
