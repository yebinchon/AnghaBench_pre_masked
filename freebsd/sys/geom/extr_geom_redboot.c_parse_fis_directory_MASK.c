
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
typedef int u_char ;
struct fis_image_desc {int* name; scalar_t__ offset; scalar_t__ size; struct fis_image_desc* next; } ;
typedef int off_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int,struct fis_image_desc*) ;
 scalar_t__ FUNC_1 (int*,int ) ;
 scalar_t__ FUNC_2 (int*) ;
 int FUNC_3 (char*,int) ;

__attribute__((used)) static struct fis_image_desc *
FUNC_4(u_char *VAR_3, size_t VAR_4, off_t VAR_5, uint32_t VAR_6)
{

 struct fis_image_desc *VAR_7, *VAR_8;
 struct fis_image_desc *VAR_9, *VAR_10;
 struct fis_image_desc *VAR_11, **VAR_12;
 int VAR_13;

 VAR_7 = (struct fis_image_desc *)VAR_3;
 VAR_8 = VAR_7 + (VAR_4 / sizeof(struct fis_image_desc));
 VAR_9 = VAR_10 = ((void*)0);
 *(VAR_12 = &VAR_11) = ((void*)0);
 for (VAR_13 = 0; VAR_7 < VAR_8; VAR_13++, VAR_7++) {
  if (VAR_7->name[0] == 0xff)
   continue;
  if ((bcmp(VAR_7->name, VAR_0, sizeof(VAR_0)-1) == 0))
   VAR_9 = VAR_7;
  else if ((FUNC_0(VAR_7->name, VAR_1, sizeof(VAR_1)-1) == 0))
   VAR_10 = VAR_7;
  if (FUNC_2(VAR_7->name)) {




   VAR_7->offset &= VAR_6;
   if (VAR_2)
    FUNC_0(VAR_13, VAR_7);
   *VAR_12 = VAR_7;
   *(VAR_12 = &VAR_7->next) = ((void*)0);
  }
 }
 if (VAR_9 == ((void*)0)) {
  if (VAR_2)
   FUNC_3("No RedBoot FIS table located at %lu\n",
       (long) VAR_5);
  return (((void*)0));
 }
 if (VAR_10 != ((void*)0) &&
     VAR_9->offset + VAR_9->size == VAR_10->offset) {



  if (VAR_2)
   FUNC_3("FIS/RedBoot merged at 0x%jx (not yet)\n",
       VAR_5 + VAR_9->offset);

 }
 return VAR_11;

}
