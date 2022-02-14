
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct bhnd_nvram_io {int dummy; } ;
struct bcm_nvram_iocfe {size_t offset; size_t size; int fd; } ;
typedef size_t int64_t ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct bcm_nvram_iocfe*,char*,int,...) ;
 int FUNC_1 (int ,size_t,void*,int) ;
 int FUNC_2 (int ,size_t) ;

__attribute__((used)) static int
FUNC_3(struct bhnd_nvram_io *VAR_3, size_t VAR_4, void *VAR_5,
    size_t VAR_6)
{
 struct bcm_nvram_iocfe *VAR_7;
 size_t VAR_8;
 int64_t VAR_9;
 int VAR_10, VAR_11;

 VAR_7 = (struct bcm_nvram_iocfe *)VAR_3;







 if (VAR_1 - VAR_4 < VAR_7->offset)
  return (VAR_0);

 VAR_9 = VAR_7->offset + VAR_4;


 if (VAR_1 - VAR_9 < VAR_6)
  return (VAR_0);


 for (VAR_8 = VAR_6; VAR_8 > 0;) {
  void *VAR_12;
  size_t VAR_13;
  int64_t VAR_14;

  VAR_13 = (VAR_6 - VAR_8);
  VAR_14 = VAR_9 + VAR_13;
  VAR_12 = ((uint8_t *)VAR_5 + VAR_13);
  VAR_11 = FUNC_2(VAR_2, VAR_8);

  VAR_10 = FUNC_1(VAR_7->fd, VAR_14, VAR_12, VAR_11);
  if (VAR_10 < 0) {
   FUNC_0(VAR_7, "cfe_readblk() failed: %d\n", VAR_10);
   return (VAR_0);
  }


  if (VAR_10 == 0 && VAR_8 > 0) {


   if (VAR_8 < VAR_7->size &&
       VAR_7->size - VAR_8 > VAR_4)
   {
    FUNC_0(VAR_7, "cfe_readblk() returned "
        "unexpected short read (%d/%d)\n", VAR_10,
        VAR_11);
    return (VAR_0);
   }
  }

  if (VAR_10 == 0)
   break;

  VAR_8 -= VAR_10;
 }


 if (VAR_8 > 0)
  return (VAR_0);

 return (0);
}
