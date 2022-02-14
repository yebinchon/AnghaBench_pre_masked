
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct reserve_info {int dummy; } ;
struct inbuf {char* ptr; } ;
struct fdt_reserve_entry {scalar_t__ address; scalar_t__ size; } ;
typedef int re ;


 struct reserve_info* FUNC_0 (struct reserve_info*,struct reserve_info*) ;
 struct reserve_info* FUNC_1 (scalar_t__,scalar_t__,int *) ;
 void* FUNC_2 (scalar_t__) ;
 int FUNC_3 (struct inbuf*,struct fdt_reserve_entry*,int) ;

__attribute__((used)) static struct reserve_info *FUNC_4(struct inbuf *VAR_0)
{
 struct reserve_info *VAR_1 = ((void*)0);
 struct reserve_info *VAR_2;
 const char *VAR_3;
 struct fdt_reserve_entry VAR_4;







 VAR_3 = VAR_0->ptr;
 while (1) {
  FUNC_3(VAR_0, &VAR_4, sizeof(VAR_4));
  VAR_4.address = FUNC_2(VAR_4.address);
  VAR_4.size = FUNC_2(VAR_4.size);
  if (VAR_4.size == 0)
   break;

  VAR_2 = FUNC_1(VAR_4.address, VAR_4.size, ((void*)0));
  VAR_1 = FUNC_0(VAR_1, VAR_2);
 }

 return VAR_1;
}
