
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef scalar_t__ u64 ;
typedef scalar_t__ u32 ;
typedef scalar_t__ u16 ;
struct _ioeventfd {scalar_t__ addr; int length; scalar_t__ datamatch; scalar_t__ wildcard; } ;
typedef scalar_t__ gpa_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (unsigned long,int) ;

__attribute__((used)) static bool
FUNC_2(struct _ioeventfd *VAR_0, gpa_t VAR_1, int VAR_2, const void *VAR_3)
{
 u64 VAR_4;

 if (!(VAR_1 == VAR_0->addr && VAR_2 == VAR_0->length))

  return 0;

 if (VAR_0->wildcard)

  return 1;



 FUNC_0(!FUNC_1((unsigned long)VAR_3, VAR_2));

 switch (VAR_2) {
 case 1:
  VAR_4 = *(u8 *)VAR_3;
  break;
 case 2:
  VAR_4 = *(u16 *)VAR_3;
  break;
 case 4:
  VAR_4 = *(u32 *)VAR_3;
  break;
 case 8:
  VAR_4 = *(u64 *)VAR_3;
  break;
 default:
  return 0;
 }

 return VAR_4 == VAR_0->datamatch ? 1 : 0;
}
