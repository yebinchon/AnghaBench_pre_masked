
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int krb5_error_code ;
typedef int krb5_context ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ,char*) ;
 int FUNC_1 (int ,char*,char*,char*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ,char*,char*,...) ;
 int FUNC_4 (int ,int,char*) ;

__attribute__((used)) static void
FUNC_5(krb5_context VAR_2)
{
    krb5_error_code VAR_3;
    char *VAR_4, *VAR_5;

    VAR_3 = FUNC_3(VAR_2, "foo", "s", "foo");
    FUNC_0(VAR_2, VAR_3, 0, "single s");
    VAR_3 = FUNC_3(VAR_2, "foo foo", "s", "foo");
    FUNC_0(VAR_2, VAR_3, VAR_0, "too many strings");
    VAR_3 = FUNC_3(VAR_2, "foo bar", "ss", "foo", "bar");
    FUNC_0(VAR_2, VAR_3, 0, "two strings");
    VAR_3 = FUNC_3(VAR_2, "foo  bar", "ss", "foo", "bar");
    FUNC_0(VAR_2, VAR_3, 0, "two strings double space");
    VAR_3 = FUNC_3(VAR_2, "foo \tbar", "ss", "foo", "bar");
    FUNC_0(VAR_2, VAR_3, 0, "two strings space + tab");
    VAR_3 = FUNC_3(VAR_2, "foo", "ss", "foo", "bar");
    FUNC_0(VAR_2, VAR_3, VAR_0, "one string, two format strings");
    VAR_3 = FUNC_3(VAR_2, "foo", "ss", "foo", "foo");
    FUNC_0(VAR_2, VAR_3, VAR_0, "one string, two format strings (same)");
    VAR_3 = FUNC_3(VAR_2, "foo  \t", "s", "foo");
    FUNC_0(VAR_2, VAR_3, 0, "ending space");

    VAR_3 = FUNC_3(VAR_2, "foo/bar", "f", "foo/bar");
    FUNC_0(VAR_2, VAR_3, 0, "liternal fnmatch");
    VAR_3 = FUNC_3(VAR_2, "foo/bar", "f", "foo/*");
    FUNC_0(VAR_2, VAR_3, 0, "foo/*");
    VAR_3 = FUNC_3(VAR_2, "foo/bar.example.org", "f",
    "foo/*.example.org");
    FUNC_0(VAR_2, VAR_3, 0, "foo/*.example.org");
    VAR_3 = FUNC_3(VAR_2, "foo/bar.example.com", "f",
    "foo/*.example.org");
    FUNC_0(VAR_2, VAR_3, VAR_0, "foo/*.example.com");

    VAR_3 = FUNC_3(VAR_2, "foo/bar/baz", "f", "foo/*/baz");
    FUNC_0(VAR_2, VAR_3, 0, "foo/*/baz");

    VAR_3 = FUNC_3(VAR_2, "foo", "r", &VAR_4);
    FUNC_0(VAR_2, VAR_3, 0, "ret 1");
    FUNC_1(VAR_2, "ret 1 match", VAR_4, "foo"); FUNC_2(VAR_4);

    VAR_3 = FUNC_3(VAR_2, "foo bar", "rr", &VAR_4, &VAR_5);
    FUNC_0(VAR_2, VAR_3, 0, "ret 2");
    FUNC_1(VAR_2, "ret 2 match 1", VAR_4, "foo"); FUNC_2(VAR_4);
    FUNC_1(VAR_2, "ret 2 match 2", VAR_5, "bar"); FUNC_2(VAR_5);

    VAR_3 = FUNC_3(VAR_2, "foo bar", "sr", "bar", &VAR_4);
    FUNC_0(VAR_2, VAR_3, VAR_0, "ret mismatch");
    if (VAR_4 != ((void*)0)) FUNC_4(VAR_2, 1, "s1 not NULL");

    VAR_3 = FUNC_3(VAR_2, "foo", "l", "foo");
    FUNC_0(VAR_2, VAR_3, VAR_1, "unknown letter");
}
