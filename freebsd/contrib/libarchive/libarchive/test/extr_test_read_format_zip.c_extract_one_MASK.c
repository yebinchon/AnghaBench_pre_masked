
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef scalar_t__ uint32_t ;
struct archive_entry {int dummy; } ;
struct archive {int dummy; } ;
typedef scalar_t__ la_ssize_t ;


 scalar_t__ FUNC_0 (struct archive_entry*) ;
 scalar_t__ FUNC_1 (struct archive*,int *,scalar_t__) ;
 int FUNC_2 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_3 (int ,int *,scalar_t__) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (scalar_t__) ;

__attribute__((used)) static
int FUNC_6(struct archive* VAR_0, struct archive_entry* VAR_1, uint32_t VAR_2)
{
 la_ssize_t VAR_3, VAR_4;
 uint8_t* VAR_5;
 int VAR_6 = 1;
 uint32_t VAR_7;

 VAR_3 = (la_ssize_t) FUNC_0(VAR_1);
 VAR_5 = FUNC_5(VAR_3);
 if(VAR_5 == ((void*)0))
  return 1;

 VAR_4 = FUNC_1(VAR_0, VAR_5, VAR_3);
 if(VAR_4 != VAR_3) {
  FUNC_2(VAR_4, VAR_3);
  goto fn_exit;
 }

 VAR_7 = FUNC_3(0, VAR_5, VAR_3);
 FUNC_2(VAR_7, VAR_2);
 VAR_6 = 0;

fn_exit:
 FUNC_4(VAR_5);
 return VAR_6;
}
