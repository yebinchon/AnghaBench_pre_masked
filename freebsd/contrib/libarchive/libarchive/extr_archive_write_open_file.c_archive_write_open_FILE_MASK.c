
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct write_FILE_data {int * f; } ;
struct archive {int dummy; } ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct archive*,int ,char*) ;
 int FUNC_1 (struct archive*,struct write_FILE_data*,int ,int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_2 (int) ;

int
FUNC_3(struct archive *VAR_5, FILE *VAR_6)
{
 struct write_FILE_data *VAR_7;

 VAR_7 = (struct write_FILE_data *)FUNC_2(sizeof(*VAR_7));
 if (VAR_7 == ((void*)0)) {
  FUNC_0(VAR_5, VAR_1, "No memory");
  return (VAR_0);
 }
 VAR_7->f = VAR_6;
 return (FUNC_1(VAR_5, VAR_7,
      VAR_3, VAR_4, VAR_2));
}
