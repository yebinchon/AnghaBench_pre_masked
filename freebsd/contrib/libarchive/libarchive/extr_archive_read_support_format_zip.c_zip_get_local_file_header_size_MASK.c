
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct archive_read {int archive; } ;
typedef scalar_t__ ssize_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 char* FUNC_0 (struct archive_read*,size_t,int *) ;
 scalar_t__ FUNC_1 (char const*) ;
 int FUNC_2 (int *,int,char*) ;
 scalar_t__ FUNC_3 (char const*,char*,int) ;

__attribute__((used)) static ssize_t
FUNC_4(struct archive_read *VAR_2, size_t VAR_3)
{
 const char *VAR_4;
 ssize_t VAR_5, VAR_6;

 if ((VAR_4 = FUNC_0(VAR_2, VAR_3 + 30, ((void*)0))) == ((void*)0)) {
  FUNC_2(&VAR_2->archive, VAR_0,
      "Truncated ZIP file header");
  return (VAR_1);
 }
 VAR_4 += VAR_3;

 if (FUNC_3(VAR_4, "PK\003\004", 4) != 0) {
  FUNC_2(&VAR_2->archive, -1, "Damaged Zip archive");
  return VAR_1;
 }
 VAR_5 = FUNC_1(VAR_4 + 26);
 VAR_6 = FUNC_1(VAR_4 + 28);

 return (30 + VAR_5 + VAR_6);
}
