
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct read_memory_data {unsigned char const* start; unsigned char const* p; size_t read_size; int copy_buff_offset; size_t copy_buff_size; struct read_memory_data* copy_buff; int end; } ;
struct archive {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct archive*) ;
 int FUNC_1 (struct archive*,struct read_memory_data*) ;
 int FUNC_2 (struct archive*,int ) ;
 int FUNC_3 (struct archive*,int ) ;
 int FUNC_4 (struct archive*,int ) ;
 int FUNC_5 (struct archive*,int ) ;
 int FUNC_6 (struct archive*,int ) ;
 int FUNC_7 (struct archive*,int ,char*) ;
 void* FUNC_8 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_9 (struct read_memory_data*,int,int) ;

__attribute__((used)) static int
FUNC_10(struct archive *VAR_8, const void *VAR_9,
    size_t VAR_10, size_t VAR_11, int VAR_12)
{
 struct read_memory_data *VAR_13 = ((void*)0);

 switch (VAR_12) {
 case 3:
  FUNC_5(VAR_8, VAR_6);
  VAR_2;
 case 2:
  FUNC_3(VAR_8, VAR_5);
  FUNC_6(VAR_8, VAR_7);
  VAR_2;
 case 1:
  VAR_13 = FUNC_8(sizeof(*VAR_13));
  if (VAR_13 == ((void*)0)) {
   FUNC_7(VAR_8, VAR_1, "No memory");
   return (VAR_0);
  }
  FUNC_9(VAR_13, 0, sizeof(*VAR_13));
  VAR_13->start = VAR_13->p = (const unsigned char *)VAR_9;
  VAR_13->end = VAR_13->start + VAR_10;
  VAR_13->read_size = VAR_11;
  VAR_13->copy_buff_offset = 32;
  VAR_13->copy_buff_size = VAR_11 + VAR_13->copy_buff_offset * 2;
  VAR_13->copy_buff = FUNC_8(VAR_13->copy_buff_size);
  FUNC_9(VAR_13->copy_buff, 0xA5, VAR_13->copy_buff_size);

  FUNC_4(VAR_8, VAR_3);
  FUNC_2(VAR_8, VAR_4);
  FUNC_1(VAR_8, VAR_13);
 }
 return FUNC_0(VAR_8);
}
