
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct yytbl_hdr {void* th_name; void* th_version; scalar_t__ th_flags; scalar_t__ th_ssize; scalar_t__ th_hsize; int th_magic; } ;


 int VAR_0 ;
 void* FUNC_0 (char const*) ;
 int FUNC_1 (struct yytbl_hdr*,int ,int) ;
 scalar_t__ FUNC_2 (char const*) ;
 scalar_t__ FUNC_3 (scalar_t__) ;

int FUNC_4 (struct yytbl_hdr *VAR_1, const char *VAR_2,
      const char *VAR_3)
{
 FUNC_1 (VAR_1, 0, sizeof (struct yytbl_hdr));

 VAR_1->th_magic = VAR_0;
 VAR_1->th_hsize = 14 + FUNC_2 (VAR_2) + 1 + FUNC_2 (VAR_3) + 1;
 VAR_1->th_hsize += FUNC_3 (VAR_1->th_hsize);
 VAR_1->th_ssize = 0;
 VAR_1->th_flags = 0;
 VAR_1->th_version = FUNC_0 (VAR_2);
 VAR_1->th_name = FUNC_0 (VAR_3);
 return 0;
}
