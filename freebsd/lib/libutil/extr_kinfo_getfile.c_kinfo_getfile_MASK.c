
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kinfo_file {scalar_t__ kf_structsize; } ;
typedef int pid_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct kinfo_file* FUNC_0 (int,int) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (size_t) ;
 int FUNC_3 (struct kinfo_file*,struct kinfo_file*,scalar_t__) ;
 int FUNC_4 (int*) ;
 int FUNC_5 (int*,int ,char*,size_t*,int *,int ) ;

struct kinfo_file *
FUNC_6(pid_t VAR_3, int *VAR_4)
{
 int VAR_5[4];
 int VAR_6;
 int VAR_7;
 size_t VAR_8;
 char *VAR_9, *VAR_10, *VAR_11;
 struct kinfo_file *VAR_12, *VAR_13, *VAR_14;

 *VAR_4 = 0;
 VAR_8 = 0;
 VAR_5[0] = VAR_0;
 VAR_5[1] = VAR_1;
 VAR_5[2] = VAR_2;
 VAR_5[3] = VAR_3;

 VAR_6 = FUNC_5(VAR_5, FUNC_4(VAR_5), ((void*)0), &VAR_8, ((void*)0), 0);
 if (VAR_6)
  return (((void*)0));
 VAR_8 = VAR_8 * 4 / 3;
 VAR_9 = FUNC_2(VAR_8);
 if (VAR_9 == ((void*)0))
  return (((void*)0));
 VAR_6 = FUNC_5(VAR_5, FUNC_4(VAR_5), VAR_9, &VAR_8, ((void*)0), 0);
 if (VAR_6) {
  FUNC_1(VAR_9);
  return (((void*)0));
 }

 VAR_7 = 0;
 VAR_10 = VAR_9;
 VAR_11 = VAR_9 + VAR_8;
 while (VAR_10 < VAR_11) {
  VAR_14 = (struct kinfo_file *)(uintptr_t)VAR_10;
  if (VAR_14->kf_structsize == 0)
   break;
  VAR_10 += VAR_14->kf_structsize;
  VAR_7++;
 }

 VAR_12 = FUNC_0(VAR_7, sizeof(*VAR_12));
 if (VAR_12 == ((void*)0)) {
  FUNC_1(VAR_9);
  return (((void*)0));
 }
 VAR_10 = VAR_9;
 VAR_11 = VAR_9 + VAR_8;
 VAR_13 = VAR_12;

 while (VAR_10 < VAR_11) {
  VAR_14 = (struct kinfo_file *)(uintptr_t)VAR_10;
  if (VAR_14->kf_structsize == 0)
   break;

  FUNC_3(VAR_13, VAR_14, VAR_14->kf_structsize);

  VAR_10 += VAR_14->kf_structsize;

  VAR_13->kf_structsize = sizeof(*VAR_13);
  VAR_13++;
 }
 FUNC_1(VAR_9);
 *VAR_4 = VAR_7;
 return (VAR_12);
}
