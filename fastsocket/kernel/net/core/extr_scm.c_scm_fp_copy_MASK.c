
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scm_fp_list {size_t count; int max; struct file** fp; } ;
struct file {int dummy; } ;
struct cmsghdr {int cmsg_len; } ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct cmsghdr*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct file* FUNC_2 (int) ;
 struct scm_fp_list* FUNC_3 (int,int ) ;

__attribute__((used)) static int FUNC_4(struct cmsghdr *VAR_5, struct scm_fp_list **VAR_6)
{
 int *VAR_7 = (int*)FUNC_1(VAR_5);
 struct scm_fp_list *VAR_8 = *VAR_6;
 struct file **VAR_9;
 int VAR_10, VAR_11;

 VAR_11 = (VAR_5->cmsg_len - FUNC_0(sizeof(struct cmsghdr)))/sizeof(int);

 if (VAR_11 <= 0)
  return 0;

 if (VAR_11 > VAR_4)
  return -VAR_1;

 if (!VAR_8)
 {
  VAR_8 = FUNC_3(sizeof(struct scm_fp_list), VAR_3);
  if (!VAR_8)
   return -VAR_2;
  *VAR_6 = VAR_8;
  VAR_8->count = 0;
  VAR_8->max = VAR_4;
 }
 VAR_9 = &VAR_8->fp[VAR_8->count];

 if (VAR_8->count + VAR_11 > VAR_8->max)
  return -VAR_1;





 for (VAR_10=0; VAR_10< VAR_11; VAR_10++)
 {
  int VAR_12 = VAR_7[VAR_10];
  struct file *VAR_13;

  if (VAR_12 < 0 || !(VAR_13 = FUNC_2(VAR_12)))
   return -VAR_0;
  *VAR_9++ = VAR_13;
  VAR_8->count++;
 }
 return VAR_11;
}
