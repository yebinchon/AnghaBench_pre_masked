
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct tomoyo_io_buffer {char* write_buf; } ;
struct tomoyo_domain_info {scalar_t__ profile; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 int FUNC_0 (int *) ;
 char* FUNC_1 (char*,char) ;
 scalar_t__ FUNC_2 (char*,int,unsigned long*) ;
 int VAR_2 ;
 struct tomoyo_domain_info* FUNC_3 (char*) ;
 int VAR_3 ;
 scalar_t__* VAR_4 ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct tomoyo_io_buffer *VAR_5)
{
 char *VAR_6 = VAR_5->write_buf;
 char *VAR_7 = FUNC_1(VAR_6, ' ');
 struct tomoyo_domain_info *VAR_8;
 unsigned long VAR_9;

 if (!VAR_7)
  return -VAR_0;
 *VAR_7 = '\0';
 FUNC_0(&VAR_2);
 VAR_8 = FUNC_3(VAR_7 + 1);
 FUNC_4(&VAR_2);
 if (FUNC_2(VAR_6, 10, &VAR_9))
  return -VAR_0;
 if (VAR_8 && VAR_9 < VAR_1
     && (VAR_4[VAR_9] || !VAR_3))
  VAR_8->profile = (u8) VAR_9;
 return 0;
}
