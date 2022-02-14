
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct inode {int i_sb; int i_size; } ;
struct buffer_head {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct buffer_head*) ;
 int FUNC_2 (struct buffer_head**,int ,int) ;
 int FUNC_3 () ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 scalar_t__ FUNC_6 (int ,int ) ;
 int FUNC_7 (struct inode*,scalar_t__,scalar_t__*,scalar_t__*,int *) ;
 int FUNC_8 (int ,scalar_t__,scalar_t__,struct buffer_head**) ;

__attribute__((used)) static int FUNC_9(struct inode *VAR_1)
{
 int VAR_2 = 0;
 int VAR_3;
 u64 VAR_4, VAR_5, VAR_6, VAR_7;

 struct buffer_head *VAR_8[32ULL];

 FUNC_3();

 FUNC_2(VAR_8, 0, sizeof(struct buffer_head *) * 32ULL);

 VAR_7 = FUNC_6(VAR_1->i_sb, VAR_1->i_size);
 VAR_4 = 0;
 while (VAR_4 < VAR_7) {
  VAR_2 = FUNC_7(VAR_1, VAR_4,
           &VAR_5, &VAR_6, ((void*)0));
  if (VAR_2 < 0) {
   FUNC_4(VAR_2);
   goto bail;
  }

  if (VAR_6 > 32ULL)
   VAR_6 = 32ULL;



  VAR_2 = FUNC_8(FUNC_0(VAR_1->i_sb),
      VAR_5, VAR_6, VAR_8);
  if (VAR_2 < 0) {
   FUNC_4(VAR_2);
   goto bail;
  }

  for(VAR_3 = 0; VAR_3 < VAR_6; VAR_3++) {
   FUNC_1(VAR_8[VAR_3]);
   VAR_8[VAR_3] = ((void*)0);
  }

  VAR_4 += VAR_6;
 }

bail:
 for(VAR_3 = 0; VAR_3 < 32ULL; VAR_3++)
  FUNC_1(VAR_8[VAR_3]);
 FUNC_5(VAR_2);
 return VAR_2;
}
