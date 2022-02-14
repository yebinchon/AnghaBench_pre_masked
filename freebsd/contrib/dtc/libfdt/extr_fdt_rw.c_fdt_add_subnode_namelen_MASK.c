
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct fdt_node_header {int name; void* tag; } ;
typedef void* fdt32_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (void*) ;
 int FUNC_1 (int) ;
 int VAR_6 ;
 struct fdt_node_header* FUNC_2 (void*,int) ;
 int FUNC_3 (void*,struct fdt_node_header*,int ,int) ;
 void* FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (void*,int,int*) ;
 int FUNC_6 (void*,int,char const*,int) ;
 int FUNC_7 (int ,char const*,int) ;
 int FUNC_8 (int ,int ,int) ;

int FUNC_9(void *VAR_7, int VAR_8,
       const char *VAR_9, int VAR_10)
{
 struct fdt_node_header *VAR_11;
 int VAR_12, VAR_13;
 int VAR_14;
 int VAR_15;
 uint32_t VAR_16;
 fdt32_t *VAR_17;

 FUNC_0(VAR_7);

 VAR_12 = FUNC_6(VAR_7, VAR_8, VAR_9, VAR_10);
 if (VAR_12 >= 0)
  return -VAR_2;
 else if (VAR_12 != -VAR_3)
  return VAR_12;


 FUNC_5(VAR_7, VAR_8, &VAR_13);
 do {
  VAR_12 = VAR_13;
  VAR_16 = FUNC_5(VAR_7, VAR_12, &VAR_13);
 } while ((VAR_16 == VAR_5) || (VAR_16 == VAR_4));

 VAR_11 = FUNC_2(VAR_7, VAR_12);
 VAR_14 = sizeof(*VAR_11) + FUNC_1(VAR_10+1) + VAR_6;

 VAR_15 = FUNC_3(VAR_7, VAR_11, 0, VAR_14);
 if (VAR_15)
  return VAR_15;

 VAR_11->tag = FUNC_4(VAR_0);
 FUNC_8(VAR_11->name, 0, FUNC_1(VAR_10+1));
 FUNC_7(VAR_11->name, VAR_9, VAR_10);
 VAR_17 = (fdt32_t *)((char *)VAR_11 + VAR_14 - VAR_6);
 *VAR_17 = FUNC_4(VAR_1);

 return VAR_12;
}
