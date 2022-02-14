
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct reserve_info {int dummy; } ;
struct inbuf {int dummy; } ;
struct fdt_reserve_entry {scalar_t__ address; scalar_t__ size; } ;
typedef int re ;


 struct reserve_info* FUNC_0 (struct reserve_info*,struct reserve_info*) ;
 struct reserve_info* FUNC_1 (scalar_t__,scalar_t__) ;
 void* FUNC_2 (scalar_t__) ;
 int FUNC_3 (struct inbuf*,struct fdt_reserve_entry*,int) ;

__attribute__((used)) static struct reserve_info *FUNC_4(struct inbuf *VAR_0)
{
 struct reserve_info *VAR_1 = ((void*)0);
 struct reserve_info *VAR_2;
 struct fdt_reserve_entry VAR_3;







 while (1) {
  FUNC_3(VAR_0, &VAR_3, sizeof(VAR_3));
  VAR_3.address = FUNC_2(VAR_3.address);
  VAR_3.size = FUNC_2(VAR_3.size);
  if (VAR_3.size == 0)
   break;

  VAR_2 = FUNC_1(VAR_3.address, VAR_3.size);
  VAR_1 = FUNC_0(VAR_1, VAR_2);
 }

 return VAR_1;
}
