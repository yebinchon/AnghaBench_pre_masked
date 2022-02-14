
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct run {int some_bytes_length; int notes_length; int other_numbers_length; int * other_numbers_data; scalar_t__ other_numbers_set; int large_number_data; scalar_t__ large_number_set; int * notes_data; scalar_t__ notes_set; int fixed_bytes_data; int some_bytes_data; scalar_t__ some_bytes_set; int how_data; } ;
struct evbuffer {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct evbuffer*,int ,int ,int) ;
 int FUNC_1 (struct evbuffer*,int ,int ) ;
 int FUNC_2 (struct evbuffer*,int ,int ) ;
 int FUNC_3 (struct evbuffer*,int ,int ) ;

void
FUNC_4(struct evbuffer *VAR_6, const struct run *VAR_7){
  FUNC_3(VAR_6, VAR_1, VAR_7->how_data);
  if (VAR_7->some_bytes_set) {
    FUNC_0(VAR_6, VAR_5, VAR_7->some_bytes_data, VAR_7->some_bytes_length);
  }
  FUNC_0(VAR_6, VAR_0, VAR_7->fixed_bytes_data, (24));
  if (VAR_7->notes_set) {
    {
      int VAR_8;
      for (VAR_8 = 0; VAR_8 < VAR_7->notes_length; ++VAR_8) {
    FUNC_3(VAR_6, VAR_3, VAR_7->notes_data[VAR_8]);
      }
    }
  }
  if (VAR_7->large_number_set) {
    FUNC_2(VAR_6, VAR_2, VAR_7->large_number_data);
  }
  if (VAR_7->other_numbers_set) {
    {
      int VAR_9;
      for (VAR_9 = 0; VAR_9 < VAR_7->other_numbers_length; ++VAR_9) {
    FUNC_1(VAR_6, VAR_4, VAR_7->other_numbers_data[VAR_9]);
      }
    }
  }
}
