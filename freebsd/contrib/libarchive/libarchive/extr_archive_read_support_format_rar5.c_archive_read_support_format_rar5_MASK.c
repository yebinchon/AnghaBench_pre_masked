
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rar5 {int dummy; } ;
struct archive_read {int archive; } ;
struct archive {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct archive_read*,struct rar5*,char*,int ,int ,int ,int ,int ,int ,int (*) (struct archive_read*),int ,int ) ;
 int FUNC_1 (int *,int ,char*) ;
 int FUNC_2 (struct archive*,struct archive_read**) ;
 struct rar5* FUNC_3 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (struct archive_read*) ;
 int VAR_5 ;
 int FUNC_5 (struct rar5*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;

int FUNC_6(struct archive *VAR_11) {
 struct archive_read* VAR_12;
 int VAR_13;
 struct rar5* VAR_14;

 if(VAR_1 != (VAR_13 = FUNC_2(VAR_11, &VAR_12)))
  return VAR_13;

 VAR_14 = FUNC_3(sizeof(*VAR_14));
 if(VAR_14 == ((void*)0)) {
  FUNC_1(&VAR_12->archive, VAR_2,
      "Can't allocate rar5 data");
  return VAR_0;
 }

 if(VAR_1 != FUNC_5(VAR_14)) {
  FUNC_1(&VAR_12->archive, VAR_2,
      "Can't allocate rar5 filter buffer");
  return VAR_0;
 }

 VAR_13 = FUNC_0(VAR_12,
     VAR_14,
     "rar5",
     VAR_3,
     VAR_6,
     VAR_9,
     VAR_7,
     VAR_8,
     VAR_10,
     FUNC_4,
     VAR_4,
     VAR_5);

 if(VAR_13 != VAR_1) {
  (void) FUNC_4(VAR_12);
 }

 return VAR_13;
}
