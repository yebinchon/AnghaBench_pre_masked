
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bhnd_nvram_io {int dummy; } ;
struct bhnd_nvram_bcmraw {size_t size; int * data; scalar_t__ count; } ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (char*,size_t,...) ;
 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int * FUNC_2 (size_t) ;
 int * FUNC_3 (int *,size_t) ;
 size_t FUNC_4 (struct bhnd_nvram_io*) ;
 int FUNC_5 (struct bhnd_nvram_io*,int,int *,size_t) ;
 int FUNC_6 (char*,size_t,char,char const**,size_t*,char const**,size_t*) ;
 size_t FUNC_7 (char*,size_t) ;

__attribute__((used)) static int
FUNC_8(struct bhnd_nvram_bcmraw *VAR_3, struct bhnd_nvram_io *VAR_4)
{
 size_t VAR_5;
 size_t VAR_6, VAR_7;
 int VAR_8;


 VAR_5 = FUNC_4(VAR_4);




 if (VAR_5 == VAR_2)
  return (VAR_1);

 VAR_6 = VAR_5 + 1 ;
 VAR_3->size = VAR_5;
 if ((VAR_3->data = FUNC_2(VAR_6)) == ((void*)0))
  return (VAR_1);


 if ((VAR_8 = FUNC_5(VAR_4, 0x0, VAR_3->data, VAR_5)))
  return (VAR_8);


 VAR_3->count = 0;
 for (VAR_7 = 0; VAR_7 < VAR_3->size; VAR_7++) {
  char *VAR_9;
  const char *VAR_10, *VAR_11;
  size_t VAR_12;
  size_t VAR_13, VAR_14;


  VAR_9 = (char *) (VAR_3->data + VAR_7);
  VAR_12 = FUNC_7(VAR_9, VAR_3->size - VAR_7);
  VAR_8 = FUNC_6(VAR_9, VAR_12, '=', &VAR_10,
          &VAR_13, &VAR_11, &VAR_14);
  if (VAR_8) {
   FUNC_1("error parsing envp at offset %#zx: %d\n",
       VAR_7, VAR_8);
   return (VAR_8);
  }




  *(VAR_9 + VAR_13) = '\0';


  VAR_3->count++;


  VAR_7 += VAR_12;
  if (VAR_7 == VAR_5) {
   FUNC_1("missing terminating NUL at offset %#zx\n",
       VAR_7);
   return (VAR_0);
  }



  if (++VAR_7 == VAR_3->size) {
   FUNC_0(VAR_7 < VAR_6,
       ("appending past end of buffer"));
   VAR_3->size++;
   *(VAR_3->data + VAR_7) = '\0';
  }



  if (*(VAR_3->data + VAR_7) == '\0')
   break;
 }


 if (VAR_7 < VAR_3->size) {
  VAR_3->data = FUNC_3(VAR_3->data, VAR_3->size);
  if (VAR_3->data == ((void*)0))
   return (VAR_1);
 }

 return (0);
}
