
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
typedef int netdissect_options ;


 int VAR_0 ;
 int FUNC_0 (int const*) ;
 int FUNC_1 (int const*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int const,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (int *,int const*) ;
 int FUNC_5 (int *,int ,int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_6 (int ,char*,int ) ;
 int VAR_6 ;

__attribute__((used)) static const u_char *
FUNC_7(netdissect_options *VAR_7,
                    const u_char *VAR_8, const u_char *VAR_9)
{

 FUNC_3(*VAR_8, 2);
 FUNC_2((VAR_7, "\n\t port_no %s", FUNC_6(VAR_3, "%u", FUNC_0(VAR_8))));
 VAR_8 += 2;

 FUNC_3(*VAR_8, VAR_0);
 FUNC_2((VAR_7, ", hw_addr %s", FUNC_4(VAR_7, VAR_8)));
 VAR_8 += VAR_0;

 FUNC_3(*VAR_8, 4);
 FUNC_2((VAR_7, "\n\t config 0x%08x", FUNC_1(VAR_8)));
 FUNC_5(VAR_7, VAR_4, FUNC_1(VAR_8), VAR_1);
 VAR_8 += 4;

 FUNC_3(*VAR_8, 4);
 FUNC_2((VAR_7, "\n\t mask 0x%08x", FUNC_1(VAR_8)));
 FUNC_5(VAR_7, VAR_4, FUNC_1(VAR_8), VAR_1);
 VAR_8 += 4;

 FUNC_3(*VAR_8, 4);
 FUNC_2((VAR_7, "\n\t advertise 0x%08x", FUNC_1(VAR_8)));
 FUNC_5(VAR_7, VAR_5, FUNC_1(VAR_8), VAR_2);
 VAR_8 += 4;

 FUNC_3(*VAR_8, 4);
 return VAR_8 + 4;

trunc:
 FUNC_2((VAR_7, "%s", VAR_6));
 return VAR_9;
}
