
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty {int t_dev; } ;
struct ptsstat {int devname; int dev; void* fs_typedep; } ;
struct filestat {int devname; int dev; void* fs_typedep; } ;
typedef struct ptsstat kvm_t ;


 int VAR_0 ;
 int FUNC_0 (struct ptsstat*) ;
 int FUNC_1 (struct ptsstat*,int) ;
 int FUNC_2 (struct ptsstat*,int ) ;
 int FUNC_3 (struct ptsstat*,int ,int ) ;
 int FUNC_4 (struct ptsstat*,unsigned long,struct tty*,int) ;
 int FUNC_5 (char*,int ,char*) ;
 int FUNC_6 (char*,void*) ;

__attribute__((used)) static int
FUNC_7(kvm_t *VAR_1, struct filestat *VAR_2,
    struct ptsstat *VAR_3, char *VAR_4)
{
 struct tty VAR_5;
 void *VAR_6;

 FUNC_0(VAR_1);
 FUNC_0(VAR_3);
 FUNC_0(VAR_2);
 FUNC_1(VAR_3, sizeof(*VAR_3));
 VAR_6 = VAR_2->fs_typedep;
 if (VAR_6 == ((void*)0))
  goto fail;
 if (!FUNC_4(VAR_1, (unsigned long)VAR_6, &VAR_5, sizeof(struct tty))) {
  FUNC_6("can't read tty at %p", (void *)VAR_6);
  goto fail;
 }
 VAR_3->dev = FUNC_2(VAR_1, VAR_5.t_dev);
 (void)FUNC_3(VAR_1, VAR_5.t_dev, VAR_3->devname);
 return (0);

fail:
 if (VAR_4 != ((void*)0))
  FUNC_5(VAR_4, VAR_0, "error");
 return (1);
}
