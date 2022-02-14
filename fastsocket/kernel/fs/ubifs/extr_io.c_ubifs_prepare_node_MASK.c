
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct ubifs_info {int min_io_size; } ;
struct ubifs_ch {void* crc; scalar_t__* padding; int sqnum; int group_type; void* len; void* magic; } ;


 int FUNC_0 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_1 (int) ;
 int FUNC_2 (unsigned long long) ;
 int FUNC_3 (int ,void*,int) ;
 unsigned long long FUNC_4 (struct ubifs_info*) ;
 int FUNC_5 (int) ;
 int FUNC_6 (struct ubifs_info*,void*,int) ;

void FUNC_7(struct ubifs_info *VAR_4, void *VAR_5, int VAR_6, int VAR_7)
{
 uint32_t VAR_8;
 struct ubifs_ch *VAR_9 = VAR_5;
 unsigned long long VAR_10 = FUNC_4(VAR_4);

 FUNC_5(VAR_6 >= VAR_0);

 VAR_9->magic = FUNC_1(VAR_2);
 VAR_9->len = FUNC_1(VAR_6);
 VAR_9->group_type = VAR_3;
 VAR_9->sqnum = FUNC_2(VAR_10);
 VAR_9->padding[0] = VAR_9->padding[1] = 0;
 VAR_8 = FUNC_3(VAR_1, VAR_5 + 8, VAR_6 - 8);
 VAR_9->crc = FUNC_1(VAR_8);

 if (VAR_7) {
  VAR_6 = FUNC_0(VAR_6, 8);
  VAR_7 = FUNC_0(VAR_6, VAR_4->min_io_size) - VAR_6;
  FUNC_6(VAR_4, VAR_5 + VAR_6, VAR_7);
 }
}
