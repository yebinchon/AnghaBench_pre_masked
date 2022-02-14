
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct procstat_core {int dummy; } ;
struct kinfo_vmentry {scalar_t__ kve_structsize; } ;


 int VAR_0 ;
 struct kinfo_vmentry* FUNC_0 (int,int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct kinfo_vmentry*,struct kinfo_vmentry*,scalar_t__) ;
 char* FUNC_3 (struct procstat_core*,int ,int *,size_t*) ;

__attribute__((used)) static struct kinfo_vmentry *
FUNC_4(struct procstat_core *VAR_1, int *VAR_2)
{
 int VAR_3;
 size_t VAR_4;
 char *VAR_5, *VAR_6, *VAR_7;
 struct kinfo_vmentry *VAR_8, *VAR_9, *VAR_10;

 VAR_5 = FUNC_3(VAR_1, VAR_0, ((void*)0), &VAR_4);
 if (VAR_5 == ((void*)0))
  return (((void*)0));
 VAR_3 = 0;
 VAR_6 = VAR_5;
 VAR_7 = VAR_5 + VAR_4;
 while (VAR_6 < VAR_7) {
  VAR_10 = (struct kinfo_vmentry *)(uintptr_t)VAR_6;
  if (VAR_10->kve_structsize == 0)
   break;
  VAR_6 += VAR_10->kve_structsize;
  VAR_3++;
 }

 VAR_8 = FUNC_0(VAR_3, sizeof(*VAR_8));
 if (VAR_8 == ((void*)0)) {
  FUNC_1(VAR_5);
  return (((void*)0));
 }
 VAR_6 = VAR_5;
 VAR_7 = VAR_5 + VAR_4;
 VAR_9 = VAR_8;

 while (VAR_6 < VAR_7) {
  VAR_10 = (struct kinfo_vmentry *)(uintptr_t)VAR_6;
  if (VAR_10->kve_structsize == 0)
   break;

  FUNC_2(VAR_9, VAR_10, VAR_10->kve_structsize);

  VAR_6 += VAR_10->kve_structsize;

  VAR_9->kve_structsize = sizeof(*VAR_9);
  VAR_9++;
 }
 FUNC_1(VAR_5);
 *VAR_2 = VAR_3;
 return (VAR_8);
}
