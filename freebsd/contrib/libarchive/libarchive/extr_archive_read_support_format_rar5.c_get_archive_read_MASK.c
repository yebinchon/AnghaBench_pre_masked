
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct archive_read {int dummy; } ;
struct archive {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct archive*,int ,int ,char*) ;

__attribute__((used)) static inline int FUNC_1(struct archive* VAR_3,
    struct archive_read** VAR_4)
{
 *VAR_4 = (struct archive_read*) VAR_3;
 FUNC_0(VAR_3, VAR_1, VAR_2,
     "archive_read_support_format_rar5");

 return VAR_0;
}
