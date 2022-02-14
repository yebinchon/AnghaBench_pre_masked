
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int type3 ;
typedef int type2 ;
typedef int type1 ;
struct TYPE_3__ {char* data; int length; } ;
struct TYPE_4__ {int data; } ;
struct ntlm_type3 {int flags; TYPE_1__ targetinfo; void* targetname; struct ntlm_type3* challenge; void* username; void* ws; TYPE_2__ ntlm; scalar_t__* os; int * hostname; void* domain; } ;
struct ntlm_type2 {int flags; TYPE_1__ targetinfo; void* targetname; struct ntlm_type2* challenge; void* username; void* ws; TYPE_2__ ntlm; scalar_t__* os; int * hostname; void* domain; } ;
struct ntlm_type1 {int flags; TYPE_1__ targetinfo; void* targetname; struct ntlm_type1* challenge; void* username; void* ws; TYPE_2__ ntlm; scalar_t__* os; int * hostname; void* domain; } ;
struct ntlm_buf {int data; int length; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,struct ntlm_type3*,TYPE_2__*) ;
 int FUNC_3 (struct ntlm_buf*,struct ntlm_type3*) ;
 int FUNC_4 (struct ntlm_buf*,struct ntlm_type3*) ;
 int FUNC_5 (struct ntlm_buf*,int,struct ntlm_type3*) ;
 int FUNC_6 (struct ntlm_type3*,struct ntlm_buf*) ;
 int FUNC_7 (struct ntlm_type3*,struct ntlm_buf*) ;
 int FUNC_8 (struct ntlm_type3*,struct ntlm_buf*) ;
 int FUNC_9 (struct ntlm_type3*) ;
 int FUNC_10 (struct ntlm_type3*) ;
 int FUNC_11 (struct ntlm_type3*) ;
 int FUNC_12 (char const*,struct ntlm_buf*) ;
 int FUNC_13 (struct ntlm_type3*,int,int) ;
 void* FUNC_14 (char const*) ;
 scalar_t__ FUNC_15 (char const*,void*) ;

__attribute__((used)) static int
FUNC_16(void)
{
    const char *VAR_4 = "foo",
 *VAR_5 = "mydomain",
 *VAR_6 = "digestpassword",
 *VAR_7 = "DOMAIN";
    struct ntlm_type1 VAR_8;
    struct ntlm_type2 VAR_9;
    struct ntlm_type3 VAR_10;
    struct ntlm_buf VAR_11;
    int VAR_12, VAR_13;

    FUNC_13(&VAR_8, 0, sizeof(VAR_8));

    VAR_8 = VAR_2|VAR_1|VAR_0;
    VAR_8 = FUNC_14(VAR_5);
    VAR_8 = ((void*)0);
    VAR_8[0] = 0;
    VAR_8[1] = 0;

    VAR_12 = FUNC_6(&VAR_8, &VAR_11);
    if (VAR_12)
 FUNC_0(1, "heim_ntlm_encode_type1");

    FUNC_13(&VAR_8, 0, sizeof(VAR_8));

    VAR_12 = FUNC_3(&VAR_11, &VAR_8);
    FUNC_1(VAR_11.data);
    if (VAR_12)
 FUNC_0(1, "heim_ntlm_encode_type1");

    FUNC_9(&VAR_8);





    FUNC_13(&VAR_9, 0, sizeof(VAR_9));

    VAR_13 = VAR_2 | VAR_0 | VAR_3;
    VAR_9 = VAR_13;

    FUNC_13(VAR_9, 0x7f, sizeof(VAR_9));
    VAR_9 = FUNC_14(VAR_7);
    VAR_9 = ((void*)0);
    VAR_9 = 0;

    VAR_12 = FUNC_7(&VAR_9, &VAR_11);
    if (VAR_12)
 FUNC_0(1, "heim_ntlm_encode_type2");

    FUNC_13(&VAR_9, 0, sizeof(VAR_9));

    VAR_12 = FUNC_4(&VAR_11, &VAR_9);
    FUNC_1(VAR_11.data);
    if (VAR_12)
 FUNC_0(1, "heim_ntlm_decode_type2");

    FUNC_10(&VAR_9);





    FUNC_13(&VAR_10, 0, sizeof(VAR_10));

    VAR_10 = VAR_13;
    VAR_10 = FUNC_14(VAR_4);
    VAR_10 = FUNC_14(VAR_7);
    VAR_10 = FUNC_14("workstation");

    {
 struct ntlm_buf VAR_14;
 FUNC_12(VAR_6, &VAR_14);

 FUNC_2(VAR_14.data, VAR_14.length,
      VAR_9,
      &VAR_10);
 FUNC_1(VAR_14.data);
    }

    VAR_12 = FUNC_8(&VAR_10, &VAR_11);
    if (VAR_12)
 FUNC_0(1, "heim_ntlm_encode_type3");

    FUNC_1(VAR_10);

    FUNC_13(&VAR_10, 0, sizeof(VAR_10));

    VAR_12 = FUNC_5(&VAR_11, 1, &VAR_10);
    FUNC_1(VAR_11.data);
    if (VAR_12)
 FUNC_0(1, "heim_ntlm_decode_type3");

    if (FUNC_15("workstation", VAR_10) != 0)
 FUNC_0(1, "type3 ws wrong");

    if (FUNC_15(VAR_7, VAR_10) != 0)
 FUNC_0(1, "type3 targetname wrong");

    if (FUNC_15(VAR_4, VAR_10) != 0)
 FUNC_0(1, "type3 username wrong");


    FUNC_11(&VAR_10);





    FUNC_13(&VAR_9, 0, sizeof(VAR_9));

    VAR_13 = VAR_2 | VAR_0 | VAR_3;
    VAR_9 = VAR_13;

    FUNC_13(VAR_9, 0x7f, sizeof(VAR_9));
    VAR_9 = FUNC_14(VAR_7);
    VAR_9 = "\x00\x00";
    VAR_9 = 2;

    VAR_12 = FUNC_7(&VAR_9, &VAR_11);
    if (VAR_12)
 FUNC_0(1, "heim_ntlm_encode_type2");

    FUNC_13(&VAR_9, 0, sizeof(VAR_9));

    VAR_12 = FUNC_4(&VAR_11, &VAR_9);
    FUNC_1(VAR_11.data);
    if (VAR_12)
 FUNC_0(1, "heim_ntlm_decode_type2");

    FUNC_10(&VAR_9);

    return 0;
}
