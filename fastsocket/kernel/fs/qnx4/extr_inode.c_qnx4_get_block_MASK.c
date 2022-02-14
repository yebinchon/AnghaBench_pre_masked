
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int i_sb; int i_ino; } ;
struct buffer_head {int dummy; } ;
typedef int sector_t ;


 int FUNC_0 (char*) ;
 int FUNC_1 (struct buffer_head*,int ,unsigned long) ;
 unsigned long FUNC_2 (struct inode*,int ) ;

__attribute__((used)) static int FUNC_3( struct inode *VAR_0, sector_t VAR_1, struct buffer_head *VAR_2, int VAR_3 )
{
 unsigned long VAR_4;

 FUNC_0(("qnx4: qnx4_get_block inode=[%ld] iblock=[%ld]\n",VAR_0->i_ino,VAR_1));

 VAR_4 = FUNC_2( VAR_0, VAR_1 );
 if ( VAR_4 ) {

  FUNC_1(VAR_2, VAR_0->i_sb, VAR_4);
 } else if ( VAR_3 ) {

 }
 return 0;
}
