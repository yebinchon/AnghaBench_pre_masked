
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int i_ctime; int i_sb; } ;
struct buffer_head {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct buffer_head*) ;
 int FUNC_1 (struct inode*) ;
 int FUNC_2 (struct inode*,int) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int ) ;
 struct buffer_head* FUNC_5 (int ,int) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static struct buffer_head *FUNC_6(struct inode *VAR_3, int VAR_4,
           int VAR_5)
{
 struct buffer_head *VAR_6 = ((void*)0);

 if ( VAR_4 >= 0 )
  VAR_4 = FUNC_2( VAR_3, VAR_4 );
 if (VAR_4) {
  VAR_6 = FUNC_5(VAR_3->i_sb, VAR_4);
  return VAR_6;
 }
 if (!VAR_5) {
  return ((void*)0);
 }
 VAR_3->i_ctime = VAR_0;
 FUNC_1(VAR_3);
 return VAR_6;
}
