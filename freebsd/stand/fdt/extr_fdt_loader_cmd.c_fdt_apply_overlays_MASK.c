
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct preloaded_file {size_t f_size; char* f_name; int f_addr; struct preloaded_file* f_next; } ;


 int FUNC_0 (int ,void*,size_t) ;
 int FUNC_1 (void*,void*) ;
 int FUNC_2 (void*,void*,size_t) ;
 int FUNC_3 (void*,void*) ;
 int VAR_0 ;
 char* FUNC_4 (int) ;
 void* VAR_1 ;
 size_t VAR_2 ;
 struct preloaded_file* FUNC_5 (int *,char*) ;
 int FUNC_6 (void*) ;
 void* FUNC_7 (size_t) ;
 int FUNC_8 (char*,...) ;

void
FUNC_9()
{
 struct preloaded_file *VAR_3;
 size_t VAR_4, VAR_5;
 size_t VAR_6;
 void *VAR_7;
 void *VAR_8;
 void *VAR_9;
 int VAR_10;

 if ((VAR_1 == ((void*)0)) || (VAR_2 == 0))
  return;

 if (VAR_0)
  return;

 VAR_4 = 0;
 for (VAR_3 = FUNC_5(((void*)0), "dtbo"); VAR_3 != ((void*)0); VAR_3 = VAR_3->f_next) {
  if (VAR_4 < VAR_3->f_size)
   VAR_4 = VAR_3->f_size;
 }


 if (VAR_4 == 0)
  return;

 VAR_9 = FUNC_7(VAR_4);
 if (VAR_9 == ((void*)0)) {
  FUNC_8("failed to allocate memory for DTB blob with overlays\n");
  return;
 }
 VAR_7 = VAR_1;
 VAR_6 = VAR_2;
 for (VAR_3 = FUNC_5(((void*)0), "dtbo"); VAR_3 != ((void*)0); VAR_3 = VAR_3->f_next) {
  FUNC_0(VAR_3->f_addr, VAR_9, VAR_3->f_size);

  VAR_10 = FUNC_1(VAR_7, VAR_9);
  if (VAR_10 != 0) {
   FUNC_8("DTB overlay '%s' not compatible\n", VAR_3->f_name);
   continue;
  }
  FUNC_8("applying DTB overlay '%s'\n", VAR_3->f_name);
  VAR_5 = VAR_6 + VAR_3->f_size;
  VAR_8 = FUNC_7(VAR_5);
  if (VAR_8 == ((void*)0)) {




   FUNC_8("failed to allocate memory for overlay base\n");
   continue;
  }
  VAR_10 = FUNC_2(VAR_7, VAR_8, VAR_5);
  if (VAR_10 != 0) {
   FUNC_6(VAR_8);
   FUNC_8("failed to open base dtb into overlay base\n");
   continue;
  }

  VAR_10 = FUNC_3(VAR_8, VAR_9);
  if (VAR_10 == 0) {

   if (VAR_7 != VAR_1)
    FUNC_6(VAR_7);
   VAR_7 = VAR_8;
   VAR_6 = VAR_5;
  } else {





   FUNC_6(VAR_8);
   FUNC_8("failed to apply overlay: %s\n",
       FUNC_4(VAR_10));
  }
 }

 if (VAR_7 != VAR_1) {
  FUNC_6(VAR_1);
  VAR_1 = VAR_7;
  VAR_2 = VAR_6;
 }
 FUNC_6(VAR_9);
 VAR_0 = 1;
}
