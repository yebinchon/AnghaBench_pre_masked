
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ dev_t ;


 unsigned int FUNC_0 (scalar_t__) ;
 unsigned int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (unsigned int,unsigned int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_3 (char*,int) ;
 scalar_t__ FUNC_4 (char) ;
 scalar_t__ FUNC_5 (int) ;
 int FUNC_6 (char*,char**,int) ;
 int FUNC_7 (char*,char*,unsigned int*,unsigned int*) ;
 scalar_t__ FUNC_8 (char*,char*) ;
 int FUNC_9 (char*,char*) ;
 int FUNC_10 (char*) ;
 scalar_t__ FUNC_11 (char*,char*,int) ;

dev_t FUNC_12(char *VAR_2)
{
 char VAR_3[32];
 char *VAR_4;
 dev_t VAR_5 = 0;
 int VAR_6;

 if (FUNC_11(VAR_2, "/dev/", 5) != 0) {
  unsigned VAR_7, VAR_8;

  if (FUNC_7(VAR_2, "%u:%u", &VAR_7, &VAR_8) == 2) {
   VAR_5 = FUNC_2(VAR_7, VAR_8);
   if (VAR_7 != FUNC_0(VAR_5) || VAR_8 != FUNC_1(VAR_5))
    goto fail;
  } else {
   VAR_5 = FUNC_5(FUNC_6(VAR_2, &VAR_4, 16));
   if (*VAR_4)
    goto fail;
  }
  goto done;
 }

 VAR_2 += 5;
 VAR_5 = VAR_0;
 if (FUNC_8(VAR_2, "nfs") == 0)
  goto done;
 VAR_5 = VAR_1;
 if (FUNC_8(VAR_2, "ram") == 0)
  goto done;

 if (FUNC_10(VAR_2) > 31)
  goto fail;
 FUNC_9(VAR_3, VAR_2);
 for (VAR_4 = VAR_3; *VAR_4; VAR_4++)
  if (*VAR_4 == '/')
   *VAR_4 = '!';
 VAR_5 = FUNC_3(VAR_3, 0);
 if (VAR_5)
  goto done;





 while (VAR_4 > VAR_3 && FUNC_4(VAR_4[-1]))
  VAR_4--;
 if (VAR_4 == VAR_3 || !*VAR_4 || *VAR_4 == '0')
  goto fail;


 VAR_6 = FUNC_6(VAR_4, ((void*)0), 10);
 *VAR_4 = '\0';
 VAR_5 = FUNC_3(VAR_3, VAR_6);
 if (VAR_5)
  goto done;


 if (VAR_4 < VAR_3 + 2 || !FUNC_4(VAR_4[-2]) || VAR_4[-1] != 'p')
  goto fail;
 VAR_4[-1] = '\0';
 VAR_5 = FUNC_3(VAR_3, VAR_6);
 if (VAR_5)
  goto done;

fail:
 return 0;
done:
 return VAR_5;
}
