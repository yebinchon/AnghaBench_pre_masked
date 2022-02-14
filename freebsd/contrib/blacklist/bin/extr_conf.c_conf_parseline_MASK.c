
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct conf {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (char const*,size_t,int,struct conf*,char**,int ) ;
 scalar_t__ FUNC_1 (unsigned char) ;
 int FUNC_2 (struct conf*,int ,int) ;

__attribute__((used)) static int
FUNC_3(const char *VAR_7, size_t VAR_8, char *VAR_9, struct conf *VAR_10, bool VAR_11)
{
 int VAR_12;

 while (*VAR_9 && FUNC_1((unsigned char)*VAR_9))
  VAR_9++;

 FUNC_2(VAR_10, 0, sizeof(*VAR_10));
 VAR_12 = FUNC_0(VAR_7, VAR_8, VAR_11, VAR_10, &VAR_9, VAR_1);
 if (VAR_12) return -1;
 VAR_12 = FUNC_0(VAR_7, VAR_8, VAR_11, VAR_10, &VAR_9, VAR_4);
 if (VAR_12) return -1;
 VAR_12 = FUNC_0(VAR_7, VAR_8, VAR_11, VAR_10, &VAR_9, VAR_0);
 if (VAR_12) return -1;
 VAR_12 = FUNC_0(VAR_7, VAR_8, VAR_11, VAR_10, &VAR_9, VAR_6);
 if (VAR_12) return -1;
 VAR_12 = FUNC_0(VAR_7, VAR_8, VAR_11, VAR_10, &VAR_9, VAR_2);
 if (VAR_12) return -1;
 VAR_12 = FUNC_0(VAR_7, VAR_8, VAR_11, VAR_10, &VAR_9, VAR_3);
 if (VAR_12) return -1;
 VAR_12 = FUNC_0(VAR_7, VAR_8, VAR_11, VAR_10, &VAR_9, VAR_5);
 if (VAR_12) return -1;

 return 0;
}
