
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef scalar_t__ uint64_t ;
typedef scalar_t__ uint32_t ;
struct pt_conf_addr_filter {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct pt_conf_addr_filter const*,scalar_t__) ;
 scalar_t__ FUNC_1 (struct pt_conf_addr_filter const*,scalar_t__) ;
 scalar_t__ FUNC_2 (struct pt_conf_addr_filter const*,scalar_t__) ;
 scalar_t__ FUNC_3 () ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_4(const struct pt_conf_addr_filter *VAR_2,
        uint64_t VAR_3)
{
 uint8_t VAR_4;

 if (!VAR_2)
  return -VAR_1;

 for (VAR_4 = 0; VAR_4 < FUNC_3(); ++VAR_4) {
  uint64_t VAR_5, VAR_6;
  uint32_t VAR_7;

  VAR_7 = FUNC_2(VAR_2, VAR_4);
  if (VAR_7 != VAR_0)
   continue;

  VAR_5 = FUNC_0(VAR_2, VAR_4);
  VAR_6 = FUNC_1(VAR_2, VAR_4);


  if ((VAR_5 <= VAR_3) && (VAR_3 <= VAR_6))
   return 0;
 }

 return 1;
}
