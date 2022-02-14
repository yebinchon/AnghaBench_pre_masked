
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iodesc {char* myea; } ;
typedef int phandle_t ;


 scalar_t__ FUNC_0 (char*,int,int,int,int,char**) ;
 int FUNC_1 () ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ,char*,char*,int) ;
 int FUNC_4 (char*) ;
 int VAR_0 ;
 char* VAR_1 ;
 char* FUNC_5 (char*) ;
 int VAR_2 ;
 int FUNC_6 (char*,...) ;
 char* FUNC_7 (char*,char) ;

__attribute__((used)) static void
FUNC_8(struct iodesc *VAR_3, void *VAR_4)
{
 phandle_t VAR_5;
 char VAR_6[64];
 char *VAR_7;
 int VAR_8;

 VAR_8 = FUNC_3(VAR_0, "bootpath", VAR_6, 64);
 if ((VAR_7 = FUNC_7(VAR_6, ':')) != ((void*)0))
  *VAR_7 = '\0';
 VAR_5 = FUNC_2(VAR_6);



 if (FUNC_3(VAR_5, "local-mac-address", VAR_3->myea, 6) == -1)

  goto punt;

 FUNC_6("boot: ethernet address: %s\n", FUNC_5(VAR_3->myea));

 if ((VAR_2 = FUNC_4(VAR_6)) == -1) {
  FUNC_6("Could not open network device.\n");
  goto punt;
 }






 VAR_1 = ((void*)0);
 if (FUNC_0("dma-alloc", VAR_2, 1, 1, (64 * 1024), &VAR_1)
     < 0) {
  FUNC_6("Failed to allocate DMA buffer (got %p).\n", VAR_1);
  goto punt;
 }






 return;

punt:
 FUNC_6("\n");
 FUNC_6("Could not boot from %s.\n", VAR_6);
 FUNC_1();
}
