
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qnx4_inode_entry {int di_status; char* di_fname; } ;
struct buffer_head {scalar_t__ b_data; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (char const*,char*,int) ;

__attribute__((used)) static int FUNC_3(int VAR_5, const char *VAR_6,
        struct buffer_head *VAR_7, unsigned long *VAR_8)
{
 struct qnx4_inode_entry *VAR_9;
 int VAR_10, VAR_11;

 if (VAR_7 == ((void*)0)) {
  FUNC_0("qnx4: matching unassigned buffer !\n");
  return 0;
 }
 VAR_9 = (struct qnx4_inode_entry *) (VAR_7->b_data + *VAR_8);
 *VAR_8 += VAR_0;
 if ((VAR_9->di_status & VAR_1) != 0) {
  VAR_10 = VAR_3;
 } else {
  VAR_10 = VAR_4;
 }

 if (!VAR_5 && (VAR_9->di_fname[0] == '.') && (VAR_9->di_fname[1] == '\0')) {
  return 1;
 }
 VAR_11 = FUNC_1( VAR_9->di_fname );
 if ( VAR_11 > VAR_10 )
  VAR_11 = VAR_10;
 if (VAR_5 != VAR_11) {
  return 0;
 }
 if (FUNC_2(VAR_6, VAR_9->di_fname, VAR_5) == 0) {
  if ((VAR_9->di_status & (VAR_2|VAR_1)) != 0) {
   return 1;
  }
 }
 return 0;
}
