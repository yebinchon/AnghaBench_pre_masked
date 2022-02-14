
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;
struct block_device {int dummy; } ;
typedef int gpt_header ;


 int VAR_0 ;
 unsigned int FUNC_0 (struct block_device*) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (unsigned int,int ) ;
 unsigned int FUNC_3 (struct block_device*,int ,int *,unsigned int) ;

__attribute__((used)) static gpt_header *
FUNC_4(struct block_device *VAR_1, u64 VAR_2)
{
 gpt_header *VAR_3;
 unsigned VAR_4 = FUNC_0(VAR_1);

 if (!VAR_1)
  return ((void*)0);

 VAR_3 = FUNC_2(VAR_4, VAR_0);
 if (!VAR_3)
  return ((void*)0);

 if (FUNC_3(VAR_1, VAR_2, (u8 *) VAR_3, VAR_4) < VAR_4) {
  FUNC_1(VAR_3);
                VAR_3=((void*)0);
  return ((void*)0);
 }

 return VAR_3;
}
