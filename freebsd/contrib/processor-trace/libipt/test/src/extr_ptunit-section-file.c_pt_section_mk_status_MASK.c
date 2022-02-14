
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
struct pt_file_status {long size; } ;
typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (char const*,char*) ;
 int FUNC_2 (int *,int ,int ) ;
 long FUNC_3 (int *) ;
 struct pt_file_status* FUNC_4 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

int FUNC_5(void **VAR_4, uint64_t *VAR_5, const char *VAR_6)
{
 struct pt_file_status *VAR_7;
 FILE *VAR_8;
 long VAR_9;
 int VAR_10;

 if (!VAR_4 || !VAR_5)
  return -VAR_2;

 VAR_8 = FUNC_1(VAR_6, "rb");
 if (!VAR_8)
  return -VAR_1;

 VAR_10 = FUNC_2(VAR_8, 0, VAR_0);
 if (VAR_10) {
  VAR_10 = -VAR_1;
  goto out_file;
 }

 VAR_9 = FUNC_3(VAR_8);
 if (VAR_9 < 0) {
  VAR_10 = -VAR_1;
  goto out_file;
 }

 VAR_7 = FUNC_4(sizeof(*VAR_7));
 if (!VAR_7) {
  VAR_10 = -VAR_3;
  goto out_file;
 }

 VAR_7->size = VAR_9;

 *VAR_4 = VAR_7;
 *VAR_5 = (uint64_t) VAR_9;

 VAR_10 = 0;

out_file:
 FUNC_0(VAR_8);
 return VAR_10;
}
