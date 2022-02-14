
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef scalar_t__ uint64_t ;
typedef int uint16_t ;
struct pt_section {int dummy; } ;
struct pt_image_section_cache {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct pt_image_section_cache*,struct pt_section**,scalar_t__*,int) ;
 int FUNC_1 (struct pt_section*) ;
 int FUNC_2 (struct pt_section*) ;
 int FUNC_3 (struct pt_section*,int *,int ,scalar_t__) ;
 int FUNC_4 (struct pt_section*) ;
 int VAR_1 ;
 int VAR_2 ;

int FUNC_5(struct pt_image_section_cache *VAR_3, uint8_t *VAR_4,
      uint64_t VAR_5, int VAR_6, uint64_t VAR_7)
{
 struct pt_section *VAR_8;
 uint64_t VAR_9;
 int VAR_10, VAR_11;

 if (!VAR_3 || !VAR_4 || !VAR_5)
  return -VAR_1;

 VAR_10 = FUNC_0(VAR_3, &VAR_8, &VAR_9, VAR_6);
 if (VAR_10 < 0)
  return VAR_10;

 if (VAR_7 < VAR_9) {
  (void) FUNC_2(VAR_8);
  return -VAR_2;
 }

 VAR_7 -= VAR_9;

 VAR_10 = FUNC_1(VAR_8);
 if (VAR_10 < 0) {
  (void) FUNC_2(VAR_8);
  return VAR_10;
 }




 if (VAR_0 < VAR_5)
  VAR_5 = VAR_0;

 VAR_11 = FUNC_3(VAR_8, VAR_4, (uint16_t) VAR_5, VAR_7);

 VAR_10 = FUNC_4(VAR_8);
 if (VAR_10 < 0) {
  (void) FUNC_2(VAR_8);
  return VAR_10;
 }

 VAR_10 = FUNC_2(VAR_8);
 if (VAR_10 < 0)
  return VAR_10;

 return VAR_11;
}
