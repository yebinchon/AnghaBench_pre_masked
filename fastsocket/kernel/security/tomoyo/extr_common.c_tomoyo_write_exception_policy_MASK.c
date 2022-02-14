
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tomoyo_io_buffer {char* write_buf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (char**,int ) ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (char*,int,int) ;
 int FUNC_3 (char*,int,int) ;
 int FUNC_4 (char*,int) ;
 int FUNC_5 (char*,int) ;
 int FUNC_6 (char*,int) ;

__attribute__((used)) static int FUNC_7(struct tomoyo_io_buffer *VAR_10)
{
 char *VAR_11 = VAR_10->write_buf;
 bool VAR_12 = FUNC_0(&VAR_11, VAR_3);

 if (FUNC_0(&VAR_11, VAR_7))
  return FUNC_3(VAR_11, 0,
        VAR_12);
 if (FUNC_0(&VAR_11, VAR_9))
  return FUNC_3(VAR_11, 1, VAR_12);
 if (FUNC_0(&VAR_11, VAR_6))
  return FUNC_2(VAR_11, 0,
             VAR_12);
 if (FUNC_0(&VAR_11, VAR_8))
  return FUNC_2(VAR_11, 1,
             VAR_12);
 if (FUNC_0(&VAR_11, VAR_1))
  return FUNC_1(VAR_11, VAR_12);
 if (FUNC_0(&VAR_11, VAR_2))
  return FUNC_4(VAR_11, VAR_12);
 if (FUNC_0(&VAR_11, VAR_5))
  return FUNC_6(VAR_11, VAR_12);
 if (FUNC_0(&VAR_11, VAR_4))
  return FUNC_5(VAR_11, VAR_12);
 return -VAR_0;
}
