
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ubifs_info {unsigned long long max_sqnum; int cnt_lock; } ;


 int VAR_0 ;
 unsigned long long VAR_1 ;
 unsigned long long VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*,unsigned long long) ;
 int FUNC_3 (struct ubifs_info*,int ) ;
 int FUNC_4 (char*) ;
 scalar_t__ FUNC_5 (int) ;

__attribute__((used)) static unsigned long long FUNC_6(struct ubifs_info *VAR_3)
{
 unsigned long long VAR_4;

 FUNC_0(&VAR_3->cnt_lock);
 VAR_4 = ++VAR_3->max_sqnum;
 FUNC_1(&VAR_3->cnt_lock);

 if (FUNC_5(VAR_4 >= VAR_1)) {
  if (VAR_4 >= VAR_2) {
   FUNC_2("sequence number overflow %llu, end of life",
      VAR_4);
   FUNC_3(VAR_3, -VAR_0);
  }
  FUNC_4("running out of sequence numbers, end of life soon");
 }

 return VAR_4;
}
