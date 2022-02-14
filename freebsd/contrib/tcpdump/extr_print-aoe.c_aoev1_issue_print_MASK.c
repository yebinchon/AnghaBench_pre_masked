
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
typedef int u_char ;
typedef int netdissect_options ;


 int const VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int const,int) ;
 int VAR_1 ;
 int FUNC_2 (int ,char*,int const) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void
FUNC_3(netdissect_options *VAR_4,
                  const u_char *VAR_5, const u_int VAR_6)
{
 const u_char *VAR_7 = VAR_5 + VAR_6;

 if (VAR_6 < VAR_0)
  goto invalid;

 FUNC_1(*VAR_5, 1);
 FUNC_0((VAR_4, "\n\tAFlags: [%s]", FUNC_2(VAR_1, "none", *VAR_5)));
 VAR_5 += 1;

 FUNC_1(*VAR_5, 1);
 FUNC_0((VAR_4, ", Err/Feature: %u", *VAR_5));
 VAR_5 += 1;

 FUNC_1(*VAR_5, 1);
 FUNC_0((VAR_4, ", Sector Count: %u", *VAR_5));
 VAR_5 += 1;

 FUNC_1(*VAR_5, 1);
 FUNC_0((VAR_4, ", Cmd/Status: %u", *VAR_5));
 VAR_5 += 1;

 FUNC_1(*VAR_5, 1);
 FUNC_0((VAR_4, "\n\tlba0: %u", *VAR_5));
 VAR_5 += 1;

 FUNC_1(*VAR_5, 1);
 FUNC_0((VAR_4, ", lba1: %u", *VAR_5));
 VAR_5 += 1;

 FUNC_1(*VAR_5, 1);
 FUNC_0((VAR_4, ", lba2: %u", *VAR_5));
 VAR_5 += 1;

 FUNC_1(*VAR_5, 1);
 FUNC_0((VAR_4, ", lba3: %u", *VAR_5));
 VAR_5 += 1;

 FUNC_1(*VAR_5, 1);
 FUNC_0((VAR_4, ", lba4: %u", *VAR_5));
 VAR_5 += 1;

 FUNC_1(*VAR_5, 1);
 FUNC_0((VAR_4, ", lba5: %u", *VAR_5));
 VAR_5 += 1;

 FUNC_1(*VAR_5, 2);
 VAR_5 += 2;

 if (VAR_6 > VAR_0)
  FUNC_0((VAR_4, "\n\tData: %u bytes", VAR_6 - VAR_0));
 return;

invalid:
 FUNC_0((VAR_4, "%s", VAR_2));
 FUNC_1(*VAR_5, VAR_7 - VAR_5);
 return;
trunc:
 FUNC_0((VAR_4, "%s", VAR_3));
}
