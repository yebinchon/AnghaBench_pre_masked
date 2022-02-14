
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct archive_write {int dummy; } ;


 int VAR_0 ;
 unsigned char VAR_1 ;
 unsigned char VAR_2 ;
 unsigned char VAR_3 ;
 unsigned char VAR_4 ;
 int FUNC_0 (unsigned char*,int ,unsigned char) ;
 int FUNC_1 (unsigned char*,int ,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 unsigned char* FUNC_2 (struct archive_write*) ;
 int FUNC_3 (struct archive_write*,int ) ;

__attribute__((used)) static int
FUNC_4(struct archive_write *VAR_8)
{
 unsigned char *VAR_9;

 VAR_9 = FUNC_2(VAR_8);

 FUNC_1(VAR_9, 0, VAR_0);
 VAR_9[0] = 'E';
 VAR_9[1] = 'R';
 VAR_9[3] = 0x01;
 VAR_9[2] = VAR_3;
 VAR_9[4] = VAR_2;
 VAR_9[5] = VAR_1;
 VAR_9[6] = VAR_4;
 VAR_9[7] = 0x01;
 FUNC_0(&VAR_9[8], VAR_6, VAR_9[4]);
 FUNC_0(&VAR_9[8+VAR_9[4]], VAR_5, VAR_9[5]);
 FUNC_0(&VAR_9[8+VAR_9[4]+VAR_9[5]], VAR_7, VAR_9[6]);

 return (FUNC_3(VAR_8, VAR_0));
}
