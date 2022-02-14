
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct yytbl_writer {int th_ssize_pos; int out; } ;
struct yytbl_hdr {scalar_t__ th_hsize; int th_name; int th_version; int th_flags; scalar_t__ th_ssize; scalar_t__ th_magic; } ;


 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int ,int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (struct yytbl_writer*,int ) ;
 scalar_t__ FUNC_5 (struct yytbl_writer*,scalar_t__) ;
 int FUNC_6 (struct yytbl_writer*) ;
 int FUNC_7 (struct yytbl_writer*,int ,int) ;

int FUNC_8 (struct yytbl_writer *VAR_0, const struct yytbl_hdr *VAR_1)
{
 int VAR_2, VAR_3;
 int VAR_4 = 0;

 if (FUNC_5 (VAR_0, VAR_1->th_magic) < 0
     || FUNC_5 (VAR_0, VAR_1->th_hsize) < 0)
  FUNC_2 (FUNC_0("th_magic|th_hsize write32 failed"));
 VAR_4 += 8;

 if (FUNC_1 (VAR_0->out, &(VAR_0->th_ssize_pos)) != 0)
  FUNC_2 (FUNC_0("fgetpos failed"));

 if (FUNC_5 (VAR_0, VAR_1->th_ssize) < 0
     || FUNC_4 (VAR_0, VAR_1->th_flags) < 0)
  FUNC_2 (FUNC_0("th_ssize|th_flags write failed"));
 VAR_4 += 6;

 VAR_2 = FUNC_3 (VAR_1->th_version) + 1;
 if ((VAR_3 = FUNC_7 (VAR_0, VAR_1->th_version, VAR_2)) != VAR_2)
  FUNC_2 (FUNC_0("th_version writen failed"));
 VAR_4 += VAR_3;

 VAR_2 = FUNC_3 (VAR_1->th_name) + 1;
 if ((VAR_3 = FUNC_7 (VAR_0, VAR_1->th_name, VAR_2)) != VAR_2)
  FUNC_2 (FUNC_0("th_name writen failed"));
 VAR_4 += VAR_3;


 if ((VAR_3 = FUNC_6 (VAR_0)) < 0)
  FUNC_2 (FUNC_0("pad64 failed"));
 VAR_4 += VAR_3;


 if (VAR_4 != (int) VAR_1->th_hsize)
  FUNC_2 (FUNC_0("pad64 failed"));

 return VAR_4;
}
