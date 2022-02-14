
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct ubifs_info {int dummy; } ;
struct ubifs_ch {void* crc; scalar_t__* padding; int sqnum; int group_type; void* len; void* magic; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (unsigned long long) ;
 int FUNC_2 (int ,void*,int) ;
 unsigned long long FUNC_3 (struct ubifs_info*) ;
 int FUNC_4 (int) ;

void FUNC_5(struct ubifs_info *VAR_5, void *VAR_6, int VAR_7, int VAR_8)
{
 uint32_t VAR_9;
 struct ubifs_ch *VAR_10 = VAR_6;
 unsigned long long VAR_11 = FUNC_3(VAR_5);

 FUNC_4(VAR_7 >= VAR_0);

 VAR_10->magic = FUNC_0(VAR_4);
 VAR_10->len = FUNC_0(VAR_7);
 if (VAR_8)
  VAR_10->group_type = VAR_3;
 else
  VAR_10->group_type = VAR_2;
 VAR_10->sqnum = FUNC_1(VAR_11);
 VAR_10->padding[0] = VAR_10->padding[1] = 0;
 VAR_9 = FUNC_2(VAR_1, VAR_6 + 8, VAR_7 - 8);
 VAR_10->crc = FUNC_0(VAR_9);
}
