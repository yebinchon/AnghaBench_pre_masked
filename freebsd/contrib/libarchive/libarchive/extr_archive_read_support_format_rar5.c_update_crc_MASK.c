
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_2__ {scalar_t__ stored_crc32; scalar_t__ has_blake2; int b2state; int calculated_crc32; } ;
struct rar5 {TYPE_1__ file; scalar_t__ skip_mode; } ;


 int FUNC_0 (int *,int const*,size_t) ;
 int FUNC_1 (int ,int const*,size_t) ;

__attribute__((used)) static void FUNC_2(struct rar5* VAR_0, const uint8_t* VAR_1, size_t VAR_2) {
    int VAR_3;

 if(VAR_0->skip_mode) {



  VAR_3 = 0;

 } else
  VAR_3 = 1;

 if(VAR_3) {


  if(VAR_0->file.stored_crc32 > 0) {
   VAR_0->file.calculated_crc32 =
    FUNC_1(VAR_0->file.calculated_crc32, VAR_1, VAR_2);
  }



  if(VAR_0->file.has_blake2 > 0) {


   (void) FUNC_0(&VAR_0->file.b2state, VAR_1, VAR_2);
  }
 }
}
