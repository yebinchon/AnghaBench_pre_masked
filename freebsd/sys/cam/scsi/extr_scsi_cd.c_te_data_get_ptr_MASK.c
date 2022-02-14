
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;
struct ioc_read_toc_entry32 {int data; } ;
struct ioc_read_toc_entry {struct cd_toc_entry* data; } ;
struct cd_toc_entry {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char*,int ) ;

__attribute__((used)) static struct cd_toc_entry *
FUNC_2(void *VAR_0, u_long VAR_1)
{
 union {
  struct ioc_read_toc_entry irte;



 } *VAR_2;

 VAR_2 = VAR_0;
 switch (FUNC_0(VAR_1)) {
 case sizeof(VAR_2->irte):
  return (VAR_2->irte.data);




 default:
  FUNC_1("Unhandled ioctl command %ld", VAR_1);
 }
}
