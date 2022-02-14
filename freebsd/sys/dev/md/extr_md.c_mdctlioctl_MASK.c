
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;
struct thread {int dummy; } ;
struct md_req {void* md_label; void* md_file_seg; void* md_file; } ;
struct md_ioctl32 {void* md_label; void* md_file; int md_version; } ;
struct md_ioctl {void* md_label; void* md_file; int md_version; } ;
struct cdev {int dummy; } ;
typedef int mdr ;
typedef scalar_t__ caddr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct md_ioctl32*,struct md_req*) ;
 int FUNC_1 (struct md_req*,struct md_ioctl32*) ;
 void* VAR_3 ;
 void* VAR_4 ;
 int FUNC_2 (struct md_req*,int) ;
 char* FUNC_3 (struct cdev*) ;
 int FUNC_4 (struct thread*,struct md_req*) ;
 int FUNC_5 (struct thread*,struct md_req*) ;
 int FUNC_6 (struct md_req*) ;
 int FUNC_7 (struct md_req*) ;
 scalar_t__ VAR_5 ;
 int FUNC_8 (char*,char*,int,scalar_t__,int,struct thread*) ;

__attribute__((used)) static int
FUNC_9(struct cdev *VAR_6, u_long VAR_7, caddr_t VAR_8, int VAR_9,
    struct thread *VAR_10)
{
 struct md_req VAR_11;
 int VAR_12;

 if (VAR_5)
  FUNC_8("mdctlioctl(%s %lx %p %x %p)\n",
   FUNC_3(VAR_6), VAR_7, VAR_8, VAR_9, VAR_10);

 FUNC_2(&VAR_11, sizeof(VAR_11));
 switch (VAR_7) {
 case 135:
 case 133:
 case 129:
 case 131: {
  struct md_ioctl *VAR_13 = (struct md_ioctl *)VAR_8;
  if (VAR_13->md_version != VAR_2)
   return (VAR_0);
  FUNC_0(VAR_13, &VAR_11);
  VAR_11.md_file = VAR_13->md_file;
  VAR_11.md_file_seg = VAR_4;

  if ((void *)VAR_13->md_file == (void *)(VAR_13 + 1))
   VAR_11.md_file_seg = VAR_3;
  VAR_11.md_label = VAR_13->md_label;
  break;
 }
 default:

  break;
 }

 VAR_12 = 0;
 switch (VAR_7) {
 case 135:



  VAR_12 = FUNC_4(VAR_10, &VAR_11);
  break;
 case 133:



  VAR_12 = FUNC_5(VAR_10, &VAR_11);
  break;
 case 129:



  VAR_12 = FUNC_7(&VAR_11);
  break;
 case 131:



  VAR_12 = FUNC_6(&VAR_11);
  break;
 default:
  VAR_12 = VAR_1;
 }

 switch (VAR_7) {
 case 135:
 case 131: {
  struct md_ioctl *VAR_14 = (struct md_ioctl *)VAR_8;
  FUNC_1(&VAR_11, VAR_14);
  break;
 }
 default:

  break;
 }

 return (VAR_12);
}
