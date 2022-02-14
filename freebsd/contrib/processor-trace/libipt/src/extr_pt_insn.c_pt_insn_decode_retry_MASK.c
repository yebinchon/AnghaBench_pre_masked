
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct pt_insn_ext {int dummy; } ;
struct pt_insn {int size; int truncated; scalar_t__ ip; int * raw; } ;
struct pt_image {int dummy; } ;
struct pt_asid {int dummy; } ;


 int FUNC_0 (struct pt_insn*,struct pt_insn_ext*) ;
 int FUNC_1 (struct pt_image*,int*,int *,int,struct pt_asid const*,scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_2(struct pt_insn *VAR_3, struct pt_insn_ext *VAR_4,
    struct pt_image *VAR_5,
    const struct pt_asid *VAR_6)
{
 int VAR_7, VAR_8, VAR_9;
 uint8_t VAR_10, VAR_11;

 if (!VAR_3)
  return -VAR_1;

 VAR_10 = VAR_3->size;
 VAR_11 = sizeof(VAR_3->raw) - VAR_10;




 if (!VAR_11)
  return -VAR_0;


 VAR_7 = FUNC_1(VAR_5, &VAR_9, &VAR_3->raw[VAR_10], VAR_11, VAR_6,
        VAR_3->ip + VAR_10);
 if (VAR_7 <= 0) {



  if (!VAR_7)
   return -VAR_1;


  if (VAR_7 == -VAR_2)
   VAR_7 = -VAR_0;

  return VAR_7;
 }


 VAR_3->size += (uint8_t) VAR_7;





 VAR_7 = VAR_3->size;







 VAR_8 = FUNC_0(VAR_3, VAR_4);
 if (VAR_8 < 0) {
  if (VAR_8 != -VAR_0)
   return VAR_8;




  if (VAR_3->size != (uint8_t) VAR_7)
   return VAR_8;

  return FUNC_2(VAR_3, VAR_4, VAR_5, VAR_6);
 }
 VAR_3->truncated = 1;

 return VAR_8;
}
